# Created by: Foxfair Hu <foxfair@FreeBSD.org>
# $FreeBSD: textproc/p5-XML-RSS-JavaScript/Makefile 329221 2013-10-03 18:38:00Z sunpoet $

PORTNAME=	XML-RSS-JavaScript
PORTVERSION=	0.65
CATEGORIES=	textproc www perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl extension to serialize your RSS as JavaScript

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-XML-RSS>=1.31:${PORTSDIR}/textproc/p5-XML-RSS
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
