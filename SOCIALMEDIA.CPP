#include<iostream.h>
#include<conio.h>
#include<malloc.h>

class connectworld
{
	char user[20], password[12],scrname[10];
	public:
		void registeruser(void);
		void postfeed(void);
		void reaction();
		void followuser();
		void unfollowuser(int);
		void getuserfeeds(int);
		void blockuser();
		void deleteuser();
};
void connectworld::registeruser(void)
{
	cout<<"User name: ";
	cin>>user;

	cout<<"Password: ";
	cin>>password;
	cout<<"screenname: ";
	cin>>scrname;
}
void connectworld::postfeed(void)
{
	cout<<"Post: Happy learning:)";
  	cout<<"\n1. like";
	cout<<"\n2. unlike";
	cout<<"\n3. hide";
	cout<<"\nyour reaction:" ;
	reaction();
}
void connectworld::reaction()
{
	int i=1,i1=1;
	cin>>i;
	if(i==1)
	{
		i++;
	}
	else if(i==2)
		i1--;
	else if(i==3)
		cout<<"This post was hided successfully";
	followuser();
}
void connectworld::followuser()
{
	int w=0,l,k,t,m,m1=0,m2=0,m3=0,m4=0,b=0,l1=0,l2=0,l3=0,l4=0,r1=0,r2=0,r3=0,r4=0;
	clrscr();
	cout<<"Followers you might be like to follow";
	cout<<"\n1.user1";
	cout<<"\n2.user2";
	cout<<"\n3.user3";
	cout<<"\n4.user4";
  	for(t=1;t<=5;t++)
	{
		cout<<"\nEnter your options(Note enter 0 to leave this page): ";
		cin>>l;

		if(l==1)
		{
			cout<<"You have successfully followed user1\n";
			b=1;
			l1=1;
			w++;
		}
		if(l==2)
		{
			cout<<"You have successfully followed user2\n";
			b=1;
			l2=2;
			w++;
		}
		if(l==3)
		{
			cout<<"You have successfully followed user3\n";
			b=1;
			l3=3;
			w++;
		}
		if(l==4)
		{
			cout<<"You have successfully followed user4\n";
			b=1;
			l4=4;
			w++;
		}
		if(l==0)
			break;
	}
	clrscr();
	cout<<"Your Follower list";
	for(t=1;t<=5;t++)
	{
		if(l1==1 && b==1)
		{
			unfollowuser(1);
			r1=l1;
			l1=0;
		}
		if(l2==2 && b==1)
		{
			unfollowuser(2);
			r2=l2;
			l2=0;
		}
		if(l3==3 && b==1)
		{
			unfollowuser(3);
			r3=l3;
			l3=0;
		}
		if(l4==4 && b==1)
		{
			unfollowuser(4);
			r4=l4;
			l4=0;
		}
	}
	cout<<"\nUnfollow Particular user (if yes kindly press 1 otherwise press 0): ";
	cin>>k;
	if(k==1)
	{

		for(t=1;t<=w;t++)
		{

			cout<<"\nEnter the user to unfollow(press 0 to exit): ";
			cin>>m;
			if(m==0)
				break;
			if(r1==1 && b==1 && m!=1 && m1==0)
			{
				unfollowuser(1);
			}
			if(r2==2 && b==1 && m!=2 && m2==0)
			{
				unfollowuser(2);
			}
			if(r3==3 && b==1 && m!=3 && m3==0)
			{
				unfollowuser(3);
			}
			if(r4==4 && b==1 && m!=4 && m4==0)
			{
				unfollowuser(4);
			}
			if(m==1)
				m1=1;
			if(m==2)
				m2=1;
			if(m==3)
				m3=1;
			if(m==4)
				m4=1;

		}

	}
}
void connectworld::unfollowuser(int g)
{
	cout<<"\nuser"<<g;
}
void connectworld::getuserfeeds(int h1)
{
	int u;
	clrscr();
	cout<<"\nget feeds of particular user";
	cout<<"\n1.user1";
	cout<<"\n2.user2";
	cout<<"\n3.user3";
	cout<<"\n4.user4";
	cout<<"\nselect user: ";
	cin>>u;
	if(u==1 && h1!=1)
	{
		cout<<"\nPOST1: Welcome to our ZOHO team.begin your brightfill career ith us:)@user1:)";
		cout<<"\nLikes: 10k Dislike: 120";
		cout<<"\n\nPOST2: ZOHO is the tool for sharper your mind @user1";
		cout<<"\nLikes: 5k Dislikes:500";
	}
	else if(h1==1)
	{
		cout<<"Sorry this is account is blocked";
	}
	if(u==2 && h1!=2)
	{
		cout<<"\nPOST1: Welcome to ZOHO team:)@user2";
		cout<<"\nLikes: 7k Dislike: 130";
		cout<<"\n\nPOST2: Build your furture with  us:) @user2";
		cout<<"\nLikes: 22k Dislike: 50 ";
		cout<<"\n\nPOST3: Let's shine with your own smartness @user2";
		cout<<"\nLikes: 15k Dislike: 400";
	}
	else if(h1==2)
	{
		cout<<"Sorry this is account is blocked";
	}
	if(u==3 && h1!=3)
	{
		cout<<"\nPOST1:  Made in india: Made for world-zoho @user3";
		cout<<"\nLikes: 80k Dislike: 450";
		cout<<"\n\nPOST2: Smartness is the secret tip for success @user3";
		cout<<"\nLikes: 1.5k Dislike: 120";
	}
	else if(h1==3)
	{
		cout<<"Sorry this is account is blocked";
	}
	if(u==4 && h1!=4)
	{
		cout<<"\nPOST1: Experience makes u perfect:)  @user4";
		cout<<"\nLikes: 2.3k Dislike: 120";
		cout<<"\n\nPOST: Dedication! Hardwork! Success!";
		cout<<"\nLikes: 34k Dislike: 250";
	}
	else if(h1==4)
	{
		cout<<"Sorry this is account is blocked";
	}
}
void connectworld::blockuser()
{
	int bl,h1;
	clrscr();
	cout<<"Block the particular user\n";
	cout<<"\n1. user1";
	cout<<"\n2. user2";
	cout<<"\n3. user3";
	cout<<"\n4. user4";
	cout<<"\nChoose the user you want to block: ";
	cin>>bl;
	if(bl==1)
	{
		cout<<"\nUser1 blocked successfully";
		h1=1;
	}
	if(bl==2)
	{
		cout<<"\\nUser2 blocked successfully";
		h1=2;
	}
	if(bl==3)
	{
		cout<<"\nUser3 blocked successfully";
		h1=3;
	}
	if(bl==4)
	{
		cout<<"\nUser4 blocked successfully";
		h1=4;
	}
	getuserfeeds(h1);
}
void connectworld::deleteuser()
{
	int h;
	cout<<"\nselect which user to be deleted: ";
	cout<<"\n1.user 1";
	cout<<"\n2.user 2";
	cout<<"\n3.user 3";
	cout<<"\n4.user 4";
	cin>>h;
	if(h==1)
		cout<<"\nYour account is deleted";
	if(h==2)
		cout<<"\nYour account is deleted";
	if(h==3)
		cout<<"\nYour account is deleted";
	if(h==4)
		cout<<"\nYour account is deleted";
}

void main()
{
	connectworld c;
	clrscr();
	c.registeruser();
	c.postfeed();
	c.blockuser();
	c.deleteuser();
	getch();
}
