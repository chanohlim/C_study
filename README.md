아두이노 및 C 활용 프로젝트

중력가속도 측정 실험 -
전자석과 초음파 센서를 사용해서 중력가속도 측정하기

1. 실험 목적
   
아두이노와 전자석, 초음파 센서를 통해 중력가속도를 측정하는 것이 이 실험의 목적이다.

2. 필요 부품

아두이노 호환 전자석 x1
초음파 센서 HC-SR04 x1
아두이노 우노 x1
점퍼 케이블
택타일 버튼 x1

3. 이론

중력가속도를 측정하기 위해 통제된 조건으로 자유낙하실험을 하는 것이 이 측정 장비의 목적이다. 자유낙하 운동에서 물체는 등가속도 직선 운동을 하는데, 그렇다면 우리는 등가속도 직선 운동 공식을 활용해서 가속도를 구할 수 있다.

공식 1. <img width="97" alt="Screenshot 2023-12-16 at 4 08 24 PM" src="https://github.com/chanohlim/C_study/assets/153146750/7e5e270b-ab3a-4364-a608-1f52811c62ec">


공식 2. <img width="120" alt="Screenshot 2023-12-16 at 4 08 32 PM" src="https://github.com/chanohlim/C_study/assets/153146750/97330627-188d-413e-806d-3301ae604203">


정지해있는 물체를 떨어트리는 것이므로, 초기 속도  이다. 초기 속도가 0이라는 것과 공식 1, 공식 2를 사용하면 공식 3

<img width="70" alt="Screenshot 2023-12-16 at 4 09 24 PM" src="https://github.com/chanohlim/C_study/assets/153146750/fa3e6097-6561-4d80-8a03-eb12e19a3346">

을 도출할 수 있다. 따라서 자유낙하 운동에서의 가속도, 즉 중력가속도를 구하기 위해서는 운동에 걸린 시간과 그 거리를 알면 구할 수 있다.

4. 실험 장치 구상


<img width="667" alt="Screenshot 2023-12-16 at 4 11 15 PM" src="https://github.com/chanohlim/C_study/assets/153146750/9a681003-8351-44d0-8ea1-7c24e57add40">
