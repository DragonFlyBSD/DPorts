# Created by: Sergey Skvortsov <skv@protey.ru>
# $FreeBSD: www/p5-Apache-Profiler/Makefile 340722 2014-01-22 17:00:46Z mat $

PORTNAME=	Apache-Profiler
PORTVERSION=	0.10
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Profiles time seconds needed for every request

BUILD_DEPENDS=	mp2bug:${PORTSDIR}/www/mod_perl2
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
