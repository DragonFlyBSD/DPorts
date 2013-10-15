# Created by: Andrew Pantyukhin <infofarmer@FreeBSD.org>
# $FreeBSD: x11-toolkits/p5-Tk-DynaTabFrame/Makefile 327785 2013-09-20 23:57:47Z bapt $

PORTNAME=	Tk-DynaTabFrame
PORTVERSION=	0.23
PORTREVISION=	4
CATEGORIES=	x11-toolkits perl5 tk
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	NoteBook widget with orientable, dynamically stacking tabs

BUILD_DEPENDS=	p5-Tk>=804.027:${PORTSDIR}/x11-toolkits/p5-Tk
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	${PORTNAME:S/-/::/g}.3

NO_STAGE=	yes
.include <bsd.port.mk>
