    int month,date;

    cout<<"enter month and date"<<endl;
    cin>>month>>date;

    if(month==12)
    {
        if(date>=22&&date<=31)
        {
            cout<<"capricon"<<endl;
        }
        else if(date>=1&&date<=21)
        {
            cout<<"sagittarius"<<endl;
        }

    }
    if(month==1)
    {
        if(date>=1&&date<=19)
        {
            cout<<"capricorn"<<endl;
        }
        if(date>=20&&date<=31)
        cout<<"aquarius"<<endl;
    }
    if(month==2)
    {
        date>=1&&date<=17?(cout<<"aquarius"):(cout<<"pisces");

    }
    return 0 ;
}
