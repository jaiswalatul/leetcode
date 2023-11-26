int seclargest(int n, vector<int> a){
    int largest=a[0];
    int seclargest=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            largest=a[i];
        }
    }
// code studio
    for(int i=0;i<n;i++){
        if(a[i]<largest  && a[i]>seclargest){
            seclargest=a[i];
        }
    }

    return seclargest;
}


int secsmallest(int n, vector<int> a){
    int smallest=a[0];
    int secsmallest=INT_MAX;
    for(int i=0;i<n;i++){
        if(a[i]<smallest){
            smallest=a[i];
        }
    }

    for(int i=0;i<n;i++){
        if(a[i]>smallest  && a[i]<secsmallest ){
            secsmallest=a[i];
        }
    }

    return secsmallest;
}





vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.

    int seclargest1=seclargest(n,a);
    int secsmallest1=secsmallest(n,a);
    vector<int>v;
    v.push_back(seclargest1);
    v.push_back(secsmallest1);
    return v;
}


///////////////********* Solution 2 **********/////////////////

//class wala example

int seclargetst(int n, vector<int> a){
    int largest=a[0];
    int seclarg=-1;
    for(int i=0;i<n;i++){
        if(a[i]>largest){
            seclarg=largest;
            largest=a[i];
        }
        else if(a[i]>seclarg && a[i]<largest){
            seclarg=a[i];
        }
    }

    return seclarg;
}

int secsmallest(int n, vector<int> a){
    int smallest=a[0];
    int secsmall=INT_MAX;
    for(int i=1;i<n;i++){
        if(a[i]<smallest){
            secsmall=smallest;
            smallest=a[i];
        }
        else if(a[i]<secsmall  && a[i]>smallest){
            secsmall=a[i];
        }
    }

    return secsmall;
}



vector<int> getSecondOrderElements(int n, vector<int> a) {
    // Write your code here.
    int large=seclargetst(n,a);
    int small=secsmallest(n,a);
    vector<int>v;
    v.push_back(large);
    v.push_back(small);
    return v;

}
