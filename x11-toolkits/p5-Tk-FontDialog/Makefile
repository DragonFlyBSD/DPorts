# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: x11-toolkits/p5-Tk-FontDialog/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Tk-FontDialog
PORTVERSION=	0.15
PORTREVISION=	3
CATEGORIES=	x11-toolkits perl5 tk
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	dhn@FreeBSD.org
COMMENT=	Font dialog widget

BUILD_DEPENDS=	p5-Tk>=804:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
MAN3=		${PORTNAME:S/-/::/g}.3

NO_STAGE=	yes
.include <bsd.port.mk>
