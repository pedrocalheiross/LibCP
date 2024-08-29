int smallestSolution(int l, int r) {
  while(l<r) {
    int m = l+(r-l)/2;
    if(check(m)) r = m;
    else l = m + 1;
  }
  return l;
}

int biggestSolution(int l, int r) {
  while(l<r) {
    int m = l+(r-l)/2;
    if(check(m)) l = m+1;
    else r = m;
  }
  return l;
}