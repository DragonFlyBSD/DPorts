# Created by: Gea-Suan Lin <gslin@gslin.org>
# $FreeBSD: graphics/p5-Image-Caa/Makefile 324174 2013-08-02 18:52:07Z mat $

PORTNAME=	Image-Caa
PORTVERSION=	1.01
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Colored ASCII Art

RUN_DEPENDS=	p5-Curses>=0:${PORTSDIR}/devel/p5-Curses
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Image::Caa.3

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demos/* ${EXAMPLESDIR}

.include <bsd.port.mk>
