# Created by: Masafumi NAKANE <max@FreeBSD.org>
# $FreeBSD: www/p5-WWW-Shorten-isgd/Makefile 327776 2013-09-20 23:36:50Z bapt $

PORTNAME=	WWW-Shorten-isgd
PORTVERSION=	0.02
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	max@FreeBSD.org
COMMENT=	Abstract interface to is.gd, one of URL shortening sites

BUILD_DEPENDS=	p5-WWW-Shorten>=1.97:${PORTSDIR}/www/p5-WWW-Shorten
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		WWW::Shorten::isgd.3

NO_STAGE=	yes
.include <bsd.port.mk>
