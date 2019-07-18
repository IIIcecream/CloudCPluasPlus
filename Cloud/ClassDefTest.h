#pragma once

/*!
*@brief        类的组成，及成员访问控制
*@author       tangw  2019/07/18  16:22
*@remarks      无
*/

class DefDemo
{
public:
    void publicFunc() {}
    int m_nPublic;

protected:
    void protectedFunc() {}
    int m_nProtected;

private:
    void privateFunc() {}
    int m_nPrivate;
};

class DefPublicSub : public DefDemo
{
    // 只有父类的private方法、属性不能访问，保留父类所有方法、属性的访问级别
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // 不可访问
    }
};

class DefPortectedSub : protected DefDemo
{
    // 只有父类的private方法、属性不能访问，父类public方法、属性在子类里变成protected
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // 不可访问
    }
};

class DefPrivateSub : private DefDemo
{
    // 只有父类的private方法、属性不能访问，父类public，protected方法、属性在子类里变成private
    void testVisit()
    {
        publicFunc();
        protectedFunc();
        //privateFunc();      // 不可访问
    }
};

void test()
{
    DefDemo oDefDemo;
    oDefDemo.publicFunc();
    // oDefDemo.protectedFunc();        // 不可访问
    // oDefDemo.privateFunc();          // 不可访问

    DefPublicSub oPublicSub;
    oPublicSub.publicFunc();
    // oPublicSub.protectedFunc();      // 不可访问
    // oPublicSub.privateFunc();        // 不可访问

    DefPortectedSub oProtectedSub;
    // oProtectedSub.publicFunc();      // 不可访问
    // oProtectedSub.protectedFunc();   // 不可访问
    // oProtectedSub.privateFunc();     // 不可访问

    DefPrivateSub oPrivateSub;
    // oPrivateSub.publicFunc();        // 不可访问
    // oPrivateSub.protectedFunc();     // 不可访问
    // oPrivateSub.privateFunc();       // 不可访问
}