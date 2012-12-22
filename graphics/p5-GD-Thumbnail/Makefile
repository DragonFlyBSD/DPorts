# Ports collection makefile for:	GD::Thumbnail
# Date created:			2006/08/15
# Whom:	      			chinsan <chinsan.tw@gmail.com>
#
# $FreeBSD: ports/graphics/p5-GD-Thumbnail/Makefile,v 1.17 2012/11/17 05:58:16 svnexp Exp $
#

PORTNAME=	GD-Thumbnail
PORTVERSION=	1.35
PORTREVISION=	3
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Thumbnail maker for GD

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	YES

MAN3=		GD::Thumbnail.3

.include <bsd.port.mk>
