# Created by: Yen-Ming Lee <leeym@FreeBSD.org>
# $FreeBSD: www/p5-LWP-UserAgent-Determined/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	LWP-UserAgent-Determined
PORTVERSION=	1.06
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JESSE
PKGNAMEPREFIX=	p5-

MAINTAINER=	leeym@FreeBSD.org
COMMENT=	A virtual browser that retries errors

RUN_DEPENDS=	p5-libwww>=0:${PORTSDIR}/www/p5-libwww
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		LWP::UserAgent::Determined.3

NO_STAGE=	yes
.include <bsd.port.mk>
