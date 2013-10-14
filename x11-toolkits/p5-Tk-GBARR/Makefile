# Created by: vanilla
# $FreeBSD: x11-toolkits/p5-Tk-GBARR/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Tk-GBARR
PORTVERSION=	2.08
PORTREVISION=	3
CATEGORIES=	x11-toolkits perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Some collection of Tk Widgets

BUILD_DEPENDS=	p5-Tk>=0:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Tk::Cloth.3 \
		Tk::FireButton.3 \
		Tk::NumEntry.3 \
		Tk::NumEntryPlain.3 \
		Tk::TFrame.3

NO_STAGE=	yes
.include <bsd.port.mk>
