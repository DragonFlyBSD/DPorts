# Created by: Tsung-Han Yeh <snowfly@yuntech.edu.tw>
# $FreeBSD: devel/p5-orz/Makefile 338866 2014-01-06 12:05:42Z az $

PORTNAME=	orz
PORTVERSION=	0.13
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN/INGY
PKGNAMEPREFIX=	p5-

MAINTAINER=	snowfly@yuntech.edu.tw
COMMENT=	Method of annotation as /* */ in perl

BUILD_DEPENDS=	p5-Module-Compile>=0.21:${PORTSDIR}/devel/p5-Module-Compile
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
