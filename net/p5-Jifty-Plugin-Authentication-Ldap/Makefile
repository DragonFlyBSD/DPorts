# Created by: Wen Heping <wenheping@gmail.com>
# $FreeBSD: net/p5-Jifty-Plugin-Authentication-Ldap/Makefile 327755 2013-09-20 22:10:23Z bapt $

PORTNAME=	Jifty-Plugin-Authentication-Ldap
PORTVERSION=	1.01
CATEGORIES=	net perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	LDAP Authentication Plugin for Jifty Apps

BUILD_DEPENDS=	p5-Jifty>=0:${PORTSDIR}/www/p5-Jifty \
		p5-perl-ldap>=0:${PORTSDIR}/net/p5-perl-ldap
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Jifty::Plugin::Authentication::Ldap.3 \
		Jifty::Plugin::Authentication::Ldap::Action::LDAPLogin.3 \
		Jifty::Plugin::Authentication::Ldap::Action::LDAPLogout.3 \
		Jifty::Plugin::Authentication::Ldap::View.3 \
		Jifty::Plugin::Authentication::Ldap::Mixin::Model::User.3

NO_STAGE=	yes
.include <bsd.port.mk>
