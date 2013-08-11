# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: devel/p5-prefork/Makefile 324174 2013-08-02 18:52:07Z mat $

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

MAN3=		prefork.3

.include <bsd.port.mk>
