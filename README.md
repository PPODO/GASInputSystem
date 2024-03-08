# GASInputSystem
***
GAS에서 GameplayAbility를 조금 더 직관적이고 쉽게 바인딩할 수 있게끔 개발된 플러그인
***

## 목차
 1. 에디터 설정
    * [사용할 InputComponent의 변경](https://github.com/PPODO/GASInputSystem#사용할-InputComponent의-변경)

 2. 데이터 에셋 생성 및 설정
    * [Input Config](https://github.com/PPODO/GASInputSystem#Input-Config)
    * [Ability Set](https://github.com/PPODO/GASInputSystem#Ability-Set)
    * [Ability Tag Relationship Mapping](https://github.com/PPODO/GASInputSystem#Ability-Tag-Relationship-Mapping)
 
 3. GameInstance 클래스 생성 및 설정
    * [사용할 GameInstance를 변경하는 법](https://github.com/PPODO/GASInputSystem#사용할-GameInstance를-변경하는-법)

 4. AbilitySystemComponent 클래스 생성
    * [IGASAbilitySystemInterface의 상속](https://github.com/PPODO/GASInputSystem#IGASAbilitySystemInterface의-상속)
    * [ApplyAbilityBlockAndCancelTags 함수 정의](https://github.com/PPODO/GASInputSystem#ApplyAbilityBlockAndCancelTags-함수-정의)

 5. PlayerController 클래스 생성
    * [GASPlayerController의 상속](https://github.com/PPODO/GASInputSystem#GASPlayerController의-상속)
    * [IGASPlayerControllerInterface의 상속](https://github.com/PPODO/GASInputSystem#IGASPlayerControllerInterface의-상속)
 
 6. Character 클래스 생성
    * [Ability 사용을 위한 GiveAbility와 RelationshipMapping](https://github.com/PPODO/GASInputSystem#Ability-사용을-위한-GiveAbility와-RelationshipMapping)
    * [Input Binding](https://github.com/PPODO/GASInputSystem#Input-Binding)
    * [InputAbilityInputTagPressed와 InputAbilityInputTagReleased 함수 선언 및 정의](https://github.com/PPODO/GASInputSystem#InputAbilityInputTagPressed와-InputAbilityInputTagReleased-함수-선언-및-정의)
    * [Confirm과 Cancel을 위한 Native Binding](https://github.com/PPODO/GASInputSystem#Confirm과과-Cancel을-위한-Native-Binding)

 7. GameplayAbility 에셋 생성 및 사용 방법
    * [IGASGameplayAbilityInterface의 상속](https://github.com/PPODO/GASInputSystem#IGASGameplayAbilityInterface의-상속)
    * [AbilityActivationCondition](https://github.com/PPODO/GASInputSystem#AbilityActivationCondition)




***

## 에디터 설정
### 사용할 InputComponent의 변경
  
  해당 플러그인을 정상적으로 사용하기 위해선 일단,   
  엔진의 기본 입력 컴포넌트 클래스를 해당 플러그인에서 제공하는 입력 컴포넌트로 변경해야 한다.   


  **프로젝트 세팅 -> 엔진 -> 입력 칸을 가보면 아래와 같이 입력 컴포넌트 클래스를 변경할 수 있다.**

  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/e0898f88-72ff-43b8-ad50-81fdcc2e6bc3)

  여기서 **기본 입력 컴포넌트 클래스**를 **GASEnhancedInputComponent** 클래스로 변경하면 된다.

*** 

## 데이터 에셋 생성 및 설정
### Input Config

  Input Config는 **IA(Input Action)와 Gameplay Tag에 대한 1:1 매칭**을 설정할 수 있는 데이터 에셋이다.   
  
  여기서 설정된 값을 통해 플레이어가 어떤 키를 입력했을 때,   
  **Input System은 해당 IA와 매칭되어 있는 Gameplay Tag를 사용하는 어빌리티들을 자동으로 찾아서 실행**시켜 줄 것이다.

---

  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/e8edbb81-9186-4361-b300-82342aa3e642)   
  **Native Input Actions**

  ---
  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/79f4fb32-94a0-42dd-9c50-7ee88ab3045f)   
  **Ability Input Actions**   

---



  IA_Action2와 IA_Action이 설정되어 있는데, 각각의 IA는 InputTag.AbilityType1, InputTag.Weapon.Fire라는 Tag를 가지고 있다.   
  
  **IA_Action2에 대한 키가 입력되면, InputSystem은 InputTag.AbilityType1 태그를 사용하는 모든 어빌리티들을 호출해 준다.**   
  
  해당 데이터 에셋만 설정한다고 해서 바로 작동되진 않고,   
  다음에 바로 소개할 **Ability Set**에서도 **GA와 Gameplay Tag를 1:1 매칭** 시켜줘야만 정상적으로 작동한다.


---
### Ability Set

  Ability Set은 **GA(GameplayAbility)와 Gameplay Tag에 대한 1:1 매칭**을 설정할 수 있는 데이터 에셋이다.

  여기서 설정된 값을 통해 플레이어가 어떤 키를 입력했을 때,   
  **Input System은 해당 Gameplay Tag와 매칭되어 있는 GA들을 자동으로 찾아서 실행**시켜 줄 것이다.


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/bff2791e-6053-49f5-ac93-4846bbacb095)   

  

  **GA_Action2는 InputTag.AbilityType1 태그와 매칭**되어 있는 걸 볼 수 있다.   
  
  Input Config 에셋에서 **InputTag.AbilityType1 태그는 IA_Action2**에 연결되어 있었는데,   
  **IA_Action2에 대한 입력**이 들어온다면, **Input System은 IA_Action2와 연결된 태그**를 통해 **GA_Action2 어빌리티를 실행**시켜 줄 것이다.


  물론 **하나의 Input Tag에 여러 개의 GA를 등록**할 수도 있다.   
  하지만, 그렇게 설정한다면 **입력 하나에 두 개의 어빌리티가 실행되는 문제**가 생기게 된다.   
  **이를 해결하기 위한 방법은 챕터 7에서 소개하도록 하겠다.**
  


---
### Ability Tag Relationship Mapping

  Ability Tag Relationship Mapping은 말그대로 **Ability Tag의 Relationship**을 설정할 수 있는 데이터 에셋이다.


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/c0f78216-1592-4530-8df6-8f6af1185f96)



  **Ability Tag**에는 **해당 설정을 사용할 태그**를   
  **Ability Tags To Block**에는 **해당 어빌리티의 실행을 Block할 태그**를   
  **Ability Tags To Cancel**에는 **해당 어빌리티의 실행을 Cancel할 태그**를 설정해 주면 된다.   
  **현재는 Ability Tags To Block만 사용할 수 있으니 참고할 것.**   


***

## GameInstance 클래스 생성 및 설정
### 사용할 GameInstance를 변경하는 법

  해당 플러그인을 정상적으로 사용하기 위해선      
  기본으로 사용할 GameInstance를 해당 플러그인에서 제공하는 GameInstance로 변경해야 한다.   


  **프로젝트 세팅 -> 프로젝트 -> 맵 & 모드 칸을 가보면 아래와 같이 게임 인스턴 클래스를 변경할 수 있다.**


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/ad023a4e-e3db-4555-a8f8-219947d45d87)


  여기서 **게임 인스턴스 클래스**를 **GASGameInstance** 클래스로 변경하면 된다.


***

## AbilitySystemComponent 클래스 생성
### IGASAbilitySystemInterface의 상속

  모종의 이유로 **입력에 따른 어빌리티 실행 로직**을 AbilitySystemComponent의 파생 클래스가 아닌,   
  **IGASAbilitySystemInterface에 구현**했다 보니 **해당 플러그인을 사용하기 위해선**,   
  **사용자는 AbilitySystemComponent의 파생 클래스에서 IGASAbilitySystemInterface를 상속**받아야만 한다.
  

  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/3438304a-99dc-4fea-bafb-8dd6ef2d3cad)


  **사용자는 위처럼 AbilitySystemComponent와 IGASAbilitySystemInterface를 상속받는 클래스를 하나 만들고,   
  ApplyAbilityBlockAndCancelTags 함수를 선언 및 정의해야 한다.**

---
### ApplyAbilityBlockAndCancelTags 함수 정의


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/a0dc6cb0-79e0-4da1-89e5-1fa6652873f1)

  다음과 같이 작성해 주면 된다.   
  **Ability Tag Relationship Mapping**과 관련된 기능이 정상적으로 작동하기 위해선 필수이므로 까먹지 말고 꼭 작성하자.

---

## PlayerController 클래스 생성
### GASPlayerController와 IGASPlayerControllerInterface의 상속


  **입력에 대한 처리를 GASPlayerController내부에서 하다 보니, 실제로 월드에 생성되는 PC는 GASPlayerController를 상속받야아만 한다.**   
  고로, **사용자는 GASPlayerController와 IGASPlayerControllerInterface를 상속**받는 새로운 PC 클래스를 만들어야 한다.   

  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/10f26993-34aa-4f59-a322-7b54ce4e7350)


  **IGASPlayerControllerInterface를 상속받아야 하는 이유는 다음과 같다.**

  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/ca4bc699-7e06-46db-bcb4-bd60b297d969)


  **매 틱마다 ASC에 접근하여 어빌리티에 대한 인풋 처리를 해주어야 하는데,**  
  요 **ASC가 PlayerState에 있을지, 아니면 Character에 있을지**는 사용자나 게임에 따라 다르기에   
  사용자는 **IGASPlayerControllerInterface에서 상속받는 GetAbilitySystemComponent에 대한 함수를 재정의**해 주어야 한다.


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/73861883-542d-422c-8933-c16c10ae3b4e)

  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/f9f7e607-dbea-4e40-9738-43e8dbfce564)


  알아서 재정의 해주도록.


---

## Character 클래스 생성
### Ability 사용을 위한 GiveAbility와 RelationshipMapping


  **어빌리티를 초기화하고, 부여하는 코드는 다음과 같다. **
  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/359d60c8-43c0-4755-aedc-4129de0bc311)


  **본인은 현재 PlayerState에 ASC가 존재하므로 이렇게 작성했다.**   
  **만약 캐릭터에 ASC를 두고 싶다면 알잘딱깔센하게 작성하도록 하자.**


---
### Input Binding


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/6e7f1d4c-a131-40cd-b31e-90ded8128dc6)

  **Input Binding을 하기 위해선, SetupPlayerInputComponent함수에서 인수로 들어오는 값**을    
  **UGASEnhancedInputComponent 타입으로 캐스팅**해 줘야 한다.   
  
  **캐스팅 전에, 프로젝트 설정에서 기본 입력 컴포넌트를 GASEnhancedInputComponent로 바꿨는지 확인하자. 안그럼 작동 안 한다. **  

  
  바인딩하려는 이벤트가 **Native Input인지 Ability Input인지에 따라 호출하는 함수**가 다르므로 유의할 것.   
  **Ability Input은 Input Config에서 설정만 해주면 SetupPlayerInputComponent함수에서 알아서 바인딩**하지만,   
  **Native Input은 해당 입력을 처리할 함수를 넣어줘야 하므로 뭐...** 코드 보면 이해했을 것이다.   
  

---
### InputAbilityInputTagPressed와 InputAbilityInputTagReleased 함수 선언 및 정의

  **Ability Input을 처리해 주기 위해선 해당 함수들을 선언하고 정의해줘야 한다.**   
  **작성은 다음과 같이 하면 된다.**
  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/69e1af74-743d-4e4d-9eab-9bd60474eeea)


---
### Confirm과 Cancel을 위한 Native Binding

  **타켓팅 기능을 사용하기 위해선 Confirm과 Cancel에 대한 입력이 존재**해야 하는데, 이를 추가하는 방법이다.   
  일단 **두 입력 모두 Native Input**이다.   
  고로 **Input Config에서 Native Input**으로 **IA_Confirm과 IA_Cancel Input Action과 Input Tag를 등록**해 주자.   


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/4e4b6a18-b084-4981-a987-d3f3badf8daf)


  **그리고 Native Input인 만큼 SetupPlayerInputComponent 함수 내부에서 해당 입력에 따라 어떤 함수를 호출할지 정해줘야한다.**


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/2fc29a00-d729-4542-a433-5a92421ec44c)

  **이렇게 해주면 문제없이 GA에서 Wait Target Data과 비슷한 함수들을 사용할 수 있게 된다.**


----

## GameplayAbility 에셋 생성 및 사용 방법
### IGASGameplayAbilityInterface의 상속

  **사용자는 GameplayAbility를 사용하기 위해서 IGASGameplayAbilityInterface를 상속받는 GameplayAbility 클래스**를 먼저 생성해야만한다.   
  그리고 **모든 GA는 해당 GameplayAbility를 기반**으로 만들면 된다.   

  그러면 **IGASGameplayAbilityInterface에서 상속받는 함수**가 있을 텐데, 이는 **순수 가상 함수**이기 때문에    
  **이를 상속 받는 하위 클래스는 해당 함수를 정의해줘야 한다.**   
  또, **해당 함수에서 EGASAbilityActivationPolicy 타입을 반환**해야 하는데, **해당 변수는 인터페이스에 선언되지 않았기에**   
  **하위 클래스에서 선언해 주도록 하자.**


  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/b7f608bd-43cd-4a22-b313-d0b7c67b46e8)

  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/7b4a3a53-a167-4f26-bdd6-a081445f39ce)



---
### AbilityActivationCondition

  우리의 새로운 **Input System은 Input Tag 하나에 여러 개의 GA를 등록**할 수 있다.   
  하지만 그렇게 되면 **생기는 문제**가 하나 있다.   
  바로 **해당 Input Tag에 맞는 입력이 들어왔을 시, 해당 Tag에 등록된 모든 GA가 활성화**된다는 것이다.   

  **AbilityActivationCondition는 이를 해결하기 위한 수단**이다.   

  일단 **해당 함수는 블루프린트에서 구현하는 함수이며, IGASGameplayAbilityInterface에서 상속**받는다.   
  해당 함수 내부를 보면,   
  
  ![image](https://github.com/PPODO/GASInputSystem/assets/37787879/ddfbb80a-291c-4d58-bf22-4a363efc284c)

  이렇게 **bool 값을 리턴하게끔 되어있는데, 해당 리턴 값을 통해 해당 어빌리티의 실행 여부를 (런타임에)결정할 수 있다.**


  예시를 들어보자   
  FPS 게임에서 총이 3개가 있다고 하면, **총마다 Fire 어빌리티가 존재**할 것이고, **어빌리티들의 Input Tag는 InputTag.Weapon.Fire**가 될 것이다.   
  근데 이렇게 되면, **Fire 입력이 들어올 때마다 3개의 총마다 각각의 Fire 어빌리티가 활성화**될 것이다.   
  **왜냐하면, 하나의 Input Tag에 여러 개의 GA를 등록했기 때문이다.**   
  그렇다면 이는 어떻게 해결할까?   

  **AbilityActivationCondition 함수 내부에서 캐릭터가 현재 들고 있는 무기와 GA_Fire가 실행되는 무기 타입을 비교**하고,   
  **두 값이 일치할 시에만 해당 어빌리티가 실행되게끔 하면 된다.**   


  뇌피셜이긴한데, 될 것이다. 된다 물론.  
  그럼 20000
  
  
---









































































