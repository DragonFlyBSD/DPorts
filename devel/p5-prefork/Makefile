# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: head/devel/p5-prefork/Makefile 332365 2013-11-01 13:08:11Z vanilla $

PORTNAME=	prefork
PORTVERSION=	1.04
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:ADAMK
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Optimize module loading across forking and non-forking scenarios

BUILD_DEPENDS=	p5-Scalar-List-Utils>=0:${PORTSDIR}/lang/p5-Scalar-List-Utils
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
