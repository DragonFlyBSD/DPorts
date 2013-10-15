# Created by: vanilla
# $FreeBSD: x11-toolkits/p5-Tk-Date/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Tk-Date
PORTVERSION=	0.44
PORTREVISION=	1
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Tk::Date - a date/time widget for perl/Tk

BUILD_DEPENDS=	p5-Tk-GBARR>=0:${PORTSDIR}/x11-toolkits/p5-Tk-GBARR
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Tk::Date.3

NO_STAGE=	yes
.include <bsd.port.mk>
