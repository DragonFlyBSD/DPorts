# New ports collection makefile for:	p5-Image-Caa
# Date created:		2006-08-24
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/graphics/p5-Image-Caa/Makefile,v 1.7 2012/11/17 05:58:17 svnexp Exp $
#

PORTNAME=	Image-Caa
PORTVERSION=	1.01
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Colored ASCII Art

RUN_DEPENDS=	p5-Curses>=0:${PORTSDIR}/devel/p5-Curses
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Image::Caa.3

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_DATA} ${WRKSRC}/demos/* ${EXAMPLESDIR}

.include <bsd.port.mk>
