# Created by: Sergey Skvortsov <skv@FreeBSD.org>
# $FreeBSD: devel/p5-POE-Component-Logger/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	POE-Component-Logger
PORTVERSION=	1.10
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	POE logging class

BUILD_DEPENDS=	p5-POE>=1.293:${PORTSDIR}/devel/p5-POE \
		p5-Log-Dispatch>=2.26:${PORTSDIR}/devel/p5-Log-Dispatch \
		p5-Log-Dispatch-Config>=1.03:${PORTSDIR}/devel/p5-Log-Dispatch-Config
RUN_DEPENDS:=	${BUILD_DEPENDS}
TEST_DEPENDS=	p5-Test-NoWarnings>=0:${PORTSDIR}/devel/p5-Test-NoWarnings

USES=		perl5
USE_PERL5=	configure

MAN3=		POE::Component::Logger.3

NO_STAGE=	yes
.include <bsd.port.mk>
