# Created by: clsung
# $FreeBSD: devel/p5-Project-Gantt/Makefile 327724 2013-09-20 17:13:42Z bapt $

PORTNAME=	Project-Gantt
PORTVERSION=	1.03
PORTREVISION=	6
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Create Gantt charts to manage project scheduling

BUILD_DEPENDS=	p5-Class-Date>=0:${PORTSDIR}/devel/p5-Class-Date \
		convert:${PORTSDIR}/graphics/ImageMagick
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure
WRKSRC=		${WRKDIR}/Gantt

MAN3=		Project::Gantt.3

NO_STAGE=	yes
.include <bsd.port.mk>
