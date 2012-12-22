# Created by: Fernan Aguero <fernan@iib.unsam.edu.ar>
# $FreeBSD: ports/graphics/p5-GD-SVG/Makefile,v 1.17 2012/11/17 05:58:16 svnexp Exp $

PORTNAME=	GD-SVG
PORTVERSION=	0.33
PORTREVISION=	4
CATEGORIES=	graphics perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Seamlessly enable SVG output from scripts written using GD

BUILD_DEPENDS=	p5-GD>=0:${PORTSDIR}/graphics/p5-GD \
		p5-SVG>=0:${PORTSDIR}/textproc/p5-SVG

PERL_CONFIGURE=	yes

MAN3=		GD::SVG.3

.include <bsd.port.mk>
