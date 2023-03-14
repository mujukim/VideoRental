# VideoRental
<문제 1-1> 영화장르 (EXAMPLE_GENRE)추가
 - 장르: EXAMPLE_GENRE
 - 대여금: 대여 일 * 2
 - 포인트: 대여 시 1 point

<문제 1-2> 새로운 형식의 영수증 출력 (장르, 제목, 대여기간, 가격)
 - 출력 함수: Customer::statement_detail()
 - 장르 출력을 위해 movie 클래스에 gerneTitle() 추가 
 
<문제 2> 문제점 분석 후 구현
 1. 대여금 계산 부분 추출
  - 대여금 계산 규칙을 찾아 movie 클래스에 구현
  - Movie : 대여 품목, 대여 규칙등 대여자가 설정할 수 있는 사항 묶음
  - rental : 고객이 대여할 품목에 대한 정보 묶음 
 2. 포인트 계산 부분 추출
  - 대여금과 마찬가지로 movie 클래스에 구현
 3. Customer::Statement() 내부 정리
  - 불필요한 변수 정리 
  - 추가했던 statement_detail()과 겹치는 내용이 많아 수정시 두 번 수정하지 않도록 결합. 
