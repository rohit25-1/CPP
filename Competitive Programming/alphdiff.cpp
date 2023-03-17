import java.util.*;

String remDup(string str)
{
	if(str.length()==0)
	{
		return "";
	}

	string ros=remDup(str.substr(1));
	if(ros.charAt(0)==str.charAt(0))
	{
		return ros;

	}
	return str[0]+ros;
}

int main()
{

  int t;
  cin>>t;
  while(t--)
  {
  	string a,b;
  	cin>>a;
  	cin>>b;
  	sort(a.begin(),a.end());
  	sort(b.begin(),b.end());
  	a=remDup(a);
  	b=remDup(b);
  	char arr[(a.length()+b.length())];
  	int pos=0;
  	string finstr="";
  	if(a==b)
  	{
  		cout<<"-1"<<endl;
  		continue;
  	}
  	for(int i=0;i<b.length();i++)
  	{
  		bool flag=false;
  		for(int j=0;j<a.length();j++)
  		{
  			if(b[i]==a[j])
  			{
  				flag=true;
  				break;;
  			}
  		}
  		if(flag==false)
  		{
  			finstr+=b[i];
  		}
  	}

  	cout<<finstr<<endl;

  }

  
  return 0;
}