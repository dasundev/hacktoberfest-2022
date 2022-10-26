<script>
    
      let Primes = new Array(500001);
      let Factors = [];
 
 
      function SieveOfEratosthenes(n) {
          Primes[0] = 1;
          for (let i = 3; i <= n; i += 2) {
              if (Primes[Math.floor(i / 2)] == 0) {
                  for (let j = 3 * i; j <= n; j += 2 * i)
                      Primes[Math.floor(j / 2)] = 1;
              }
          }
 
          for (let i = 2; i <= 500001; i++) {
              if (!Primes[i])
                  Factors.push(i);
          }
      }
 
  
      function compare(a,
          b) {
          return b.second - a.second;
      }
 
   
      function log_a_to_base_b(a, b) {
          return Math.log(a) / Math.log(b);
      }
 
  
      function HighestPower(N, K) {
          let start = 0, end = log_a_to_base_b(N, K);
          let ans = 0;
          while (start <= end) {
 
              let mid = start + Math.floor((end - start) / 2);
              let temp = (Math.pow(K, mid));
 
              if (N % temp == 0) {
                  ans = mid;
                  start = mid + 1;
              }
              else {
                  end = mid - 1;
              }
          }
          return ans;
      }
 
     
      function displayHighestOrder(arr, N) {
          let Nums = [];
 
          for (let i = 0; i < N; i++) {
 
              
              let temp = 1;
              for (Prime of Factors) {
 
                
                  if (Prime * Prime > arr[i])
                      break;
                  else if (arr[i] % Prime == 0)
                      temp = Math.max(
                          temp,
                          HighestPower(arr[i], Prime));
              }
              Nums.push({ first: arr[i], second: temp });
          }
 
          Nums.sort(compare)
 
          for (let i = 0; i < N; i++) {
              document.write(Nums[i].first + " ");
          }
          document.write('<br>')
      }
 
     
      SieveOfEratosthenes(500000);
      let arr = [81, 25, 27, 32, 51];
      let N = arr.length;
 
      displayHighestOrder(arr, N);
 
  </script>
