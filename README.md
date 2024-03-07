# GASInputSystem
***
GAS에서 GameplayAbility를 조금 더 직관적이고 쉽게 바인딩 할 수 있게끔 개발 된 플러그인
***

## 목차
1. Input Config 설정
2. Ability Set 설정
3. 인풋 바인딩
4. Give Ability
5. GASPlayerController 상속
7. IGASGameplayAbilityInterface의 상속
8. IGASGameplayAbilityInterface를 상속받은 GameplayAbility 사용 방법




# Input Config 설정
해당 시스템을 사용하기 위해 설정해야하는 것들 중, 가장 중요한 Input Config 먼저 알아보자.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/82ca7649-a34f-482c-b537-15441c07b717)


위의 사진은 테스트를 위한 프로젝트 파일에서 생성한 InputConfig 에셋이다.
실제로 사용하고 싶다면,


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/4f0cd320-02cb-47cc-8e87-61cd5f28bb7c)
![image](https://github.com/PPODO/GASInputSystem/assets/37787879/9de50dae-4f5d-4df7-9f7f-b56de760e434)


데이터 에셋에서 GASInputConfig을 상속받아 새로운 에셋을 생성하면 된다.
생성한 후의 모습은 다음과 같을 것이다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/2f713b85-118c-4039-bed6-7de907663768)


여기서 **Native Input Actions** 배열에는 캐릭터의 이동, 점프, 화면 움직임등의 
어빌리티가 사용되지 않아도 되는 Input Action에 대한 정보만을 담아둬야한다.

**Ability Input Actions**은 당연히 그 반대겠즁?


자, 그럼 임시로 작성한 Input Config 데이터 에셋을 살펴보자.


***
![image](https://github.com/PPODO/GASInputSystem/assets/37787879/f6d4e48a-8318-4d73-bc23-63d721b1775b)


기본 속성값으로는 **Input Action**, **Use Multiple Input Tags**, **Input Tag**, **배열로 된 Input Tag**가 있을 것이다.


Input Action은 말그대로 InputAction 에셋을 넣어주면 된다.

Move라면 IA_Move를, Look이라면 IA_Look, Jump라면 IA_Jump

액션에 맞는 IA 에셋을 알잘딱깔센하게 넣어주면 된다.


Use Multiple Input Tags는 말 그대로 해당 입력에 여러개의 Input Tag를 사용할지에 대한 여부를 설정할 수 있다.
Native Input에서는 여러개의 Input Tag를 사용할 필요가 없으므로, 해당 예제에선 설정하지 않았다.


Input Tag에는 해당 Input Action과 1:1로 매칭될 Input Tag를 설정해주면 된다.


Native Input 액션은 별거 없으니 그냥 넘어가자. 작성하기 귀찮다.



![image](https://github.com/PPODO/GASInputSystem/assets/37787879/27b98c17-87f1-42f6-ba1e-4cf95407f2ef)


자, Ability Input Actions는 어떻게 설정하면 되는지 설명하도록 하겠다.


Input Action에는 그대로 사용할 InputAction 에셋을 넣어준다.

Use Multiple Input Tags는 이제 Ability Input에 한해서만 사용할 수 있는데,
해당 체크박스를 활성화하면, InputAction에 여러개의 Input Tag를 등록할 수 있게 할 수 있다.
그러면 어떤 점이 좋냐?


가장 좋은 예시로,
FPS게임을 만든다 치자.
소총, 권총, 샷건마다 Fire Ability가 존재할 것이고, 각 Fire Ability는 다른 GameplayTag를 가지고 있을 것이다.
위의 상황에서 Multiple Input Tags를 활성화해주고, 해당 인풋에 Active될 GameplayTag를 등록해주면 위대한 GASInputComponent가
내부적으로 알아서 처리해줄 것이다.
내부적으로 처리되는 방법은 몰라도 된다.
그것이 플러그인이기도 하고, 귀찮으니까..



자, 해당 Input Config에 대한 결과를 보여주도록 하겠다.
Ability.type1.action 태그를 사용하는 GA는 화면에 Hello2가 프린트되도록
Ability.type2.action 태그를 사용하는 GA는 화면에 Hello가 프린트되도록했다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/080658a3-87b5-4f97-8ec5-9867e16c2eb3)


결과는 아주 훌륭했다. 하나의 Input Action에 두 개의 GameplayAbility가 활성화됐다.
잠깐, Input Action 하나의 GA_1과 GA_2를 등록했지만, 키를 눌렀을 때 GA 두개가 동시에 활성화 되는 것이 아닌, 어떤 조건에 충족할 땐 GA_1번을 또 다른 어떤 조건에 충족할 땐 GA_2번을 활성화하고 싶다고?
어허. 해당 문제를 해결하는 방법은 찬찬히 설명할테니, 일단 지금은 여기까지하고 넘어가도록 하자.




# Ability Set 설정


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/82ca7649-a34f-482c-b537-15441c07b717)


DA_AbilitySet이란 데이터 에셋이 있을 것이다.
해당 데이터 에셋에서는 GameplayTag과 GA에 대한 1:1 매칭 설정을 해줄 수 있다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/948e9ac2-6b20-437d-8f73-dc3953c48135)


Ability Set에셋 내부 예시는 이렇다.

GA_Action1번에는 Ability.type1.action 게임 태그를
GA_Action2번에는 Ability.type2.action 게임 태그를 매칭시켜줬다.


고로 


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/080658a3-87b5-4f97-8ec5-9867e16c2eb3)


위의 결과가 나온 것이다.


***
자, 가장 중요한 데이터 에셋 설정 방법은 여기까지다.
다음은 Character 클래스 내부에서 GAS를 어떻게 EnhancedInputComponent에 바인딩 하느냐에 대한 설명이다.
***


# 인풋 바인딩
***


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/f5b9918a-8cb2-4beb-8862-81c7edf4a2a4)


인수로 들어온 PlayerInputComponent를 UGASEnhancedInputComponent로 캐스팅 해주고,
캐스팅된 변수를 사용하여
Native Input Action은 BindNativeAction함수를
Ability Input Action은 BindAbilityActions함수를 사용하여 등록해주면 된다.


BindAbilityActions함수에서 InputAbilityInputTagPressed 함수와 InputAbilityInputTagReleased 함수는 따로 정의해줘야하는데,
해당 코드도 보여주도록 하겠다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/bfff47b2-6848-43c8-8b26-3a74033d34a2)


AbilitySystemComponent를 IGASAbilitySystemInterface 타입으로 업 캐스팅해주고, 해당 함수들을 호출해주면 된다.
**자고로 AbilitySystemComponent는 IGASAbilitySystemInterface를 상속받아야 한다!**


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/4cf4f018-ea7b-4867-977d-350c419ff341)


**다중 상속이지만, 뭐가 됐던 일단 다형성의 이유로 UAbilitySystemComponent와 IGASAbilitySystemInterface 두 가지 타입 모두에게 업 캐스팅이 가능하다.**


이렇게 Input Component에 바인딩만 잘 해주면, 내부적으로 알아서 잘 처리해주니 걱정말라구!



# Give Ability
***


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/4550314e-afed-4bcf-9bb4-0abb5dcdbd8b)


캐릭터 클래스 내부에서 이렇게 해주면 된다. 귀찮으니 설명 생략



# GASPlayerController 상속
***

설명할 건 따로 없다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/01584aa2-84b2-411e-98bf-f43cc2af983b)


새로운 PC를 만들어서 AGASPlayerController 상속 받게끔 해주면 내부적으로 알아서 입력에 대한 처리를 해줄 것이다.



# IGASGameplayAbilityInterface의 상속
***


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/4ca56dea-654c-4cf1-a781-9dbc8b1581d9)


GameplayAbility는 무줙권 IGASGameplayAbilityInterface를 상속받아야 한다. 안그럼 문제 생긴다. 내부적으로 그렇게 되게끔 했기에..


클래스 내부에 GetActivationPolicy 함수는 IGASGameplayAbilityInterface에서 순수 가상 함수로 선언되었기에 상속 받는 하위 클래스에서 무족권 구현해줘야한다.
EGASAbilityActivationPolicy 타입을 반환해줘야하는데, 해당 변수는 인터페이스 클래스에 없기 때문에ㅋㅋ
하위 클래스에서 선언하고, GetActivationPolicy 구현부에서 리턴까지 작성해줘야한다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/794599e6-96db-4797-bef0-96f3f86562aa)




# IGASGameplayAbilityInterface를 상속받은 GameplayAbility 사용 방법
***


자 이제 마지막 챕터다.
GameplayAbility블루프린트를 생성했다면 오른쪽 패널 위쪽에 변수 하나가 있을 것이다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/9db863b4-98ba-455a-8dec-9f5d9b6fa606)


이게 이제 해당 어빌리티 활성화가 어떤 입력에 활성화 될 것인지에 대한 여부를 설정해주는 건데,

onInputTriggered로 설정하면, 입력 시작과 끝에 한 번,
whileInputActive로 설정하면, 입력이 끝날 때까지 해당 어빌리티가 실행된다.

아, 자고로 onInputTriggered를 사용하기 위해선 Cooldown쪽에서 뭘 설정해줘야하는데 까먹고 아직 안 만들었으니 추후에 추가하겠다.


그리고 왼쪽 패널을 보면,

![image](https://github.com/PPODO/GASInputSystem/assets/37787879/3cc024a0-457b-47f7-95ea-b3cc4307f010)


AbilityActivationCondition이라는 IGASGameplayAbilityInterface에서 상속받은 함수가 하나 있을텐데, 이건 무조건 구현해줘야 한다.

이게 챕터 1에서 말한

![image](https://github.com/PPODO/GASInputSystem/assets/37787879/5dac9a9b-4f9e-4130-8766-c4f21fdd97a9)

위의 문제를 해결하기 위한 방법이다.


해당 함수 내부를 보면 bool 값을 리턴하게끔 되어 있는데, 여기서 해당 어빌리티가 실행되기 위한 조건에 대한 로직을 작성하면 된다.

이해를 위해 예시로 만든 프로젝트에서 GA_1번의 리턴 값은 false로 GA_2번의 리턴 값을 true로 설정하고 결과를 보자.

![image](https://github.com/PPODO/GASInputSystem/assets/37787879/09825f95-ed12-4444-8e98-21e419dffcf2)

![image](https://github.com/PPODO/GASInputSystem/assets/37787879/0887670f-f9f5-4693-bcae-04d010cc3f07)


GA_1번은 화면에 Hello2를, GA_2번은 화면에 Hello를 출력할텐데,
이게 정상적으로 작동한다면, 화면에는 GA_2번의 Hello만 출력되어야 한다.


![image](https://github.com/PPODO/GASInputSystem/assets/37787879/a8d32a74-061e-4bd5-b697-56da362799c5)


자 이상 없다.

그럼 20000

