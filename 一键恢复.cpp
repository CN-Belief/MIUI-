#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int YN;
	cout<<"是否恢复优化"<<endl<<"输入1 = 恢复 输入0 = 不恢复"<<endl;
	cin>>YN;
	if(YN==1)
	{
		system("adb shell pm able-user com.miui.systemAdSolution");//禁用智能服务 
		system("adb shell pm able-user com.xiaomi.ab"); //禁用小米电商 
		system("adb shell pm able-user com.miui.bugreport");//禁用用户反馈 
		system("adb shell pm able-user com.miui.analytics");//禁用系统毒瘤 
		system("adb shell rm -f -r /sdcard/Android/data/com.miui.systemAdSolution/files");//删除开屏广告 
		cout<<"恢复成功，重启生效"<<endl;
	}
	cout<<"是否恢复系统更新"<<endl<<"输入1 = 恢复 输入0 = 不恢复"<<endl;
	cin>>YN;
	if(YN==1)
	{
		system("adb shell rm -f -r /sdcard/Download/downloaded_rom");
		cout<<"恢复成功，重启生效"<<endl;
	}
	cout<<"是否恢复系统精简"<<endl<<"输入1 = 恢复 输入0 = 不恢复";
	cin>>YN; 
	if(YN==1)
	{
		system("adb shell pm able-user com.miui.BookmarkProvider");//谷歌浏览器收藏插件，接口已废除
		system("adb shell pm able-user com.miui.AiAsstVision");//小爱相关，删除不影响小爱
		system("adb shell pm able-user com.miui.BasicDreams");//屏保，接口已废除
		system("adb shell pm able-user com.miui.BookmarkProvider");//谷歌浏览器收藏插件，接口已废除
		system("adb shell pm able-user com.miui.CatcherPatch");
		system("adb shell pm able-user com.miui.CatchLog");//收集日志 
		system("adb shell pm able-user com.miui.KeyChain");//密钥链，中国用不到
		system("adb shell pm able-user com.xiaomi.powerchecker");//耗电检测 
		system("adb shell pm able-user com.xiaomi.payment");//米币支付  
		system("adb shell pm able-user com.miui.yellowpage");//生活黄页 
		system("adb shell pm able-user com.xiaomi.youpin");//小米有品
		system("adb shell pm able-user com.mfashiongallery.emag");//小米画报
		cout<<"恢复成功，重启生效"<<endl;
	}
	return 0;
} 
