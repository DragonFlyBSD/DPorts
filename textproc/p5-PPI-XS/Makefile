# $FreeBSD: textproc/p5-PPI-XS/Makefile 324352 2013-08-07 13:20:32Z az $

PORTNAME=	PPI-XS
PORTVERSION=	0.902
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	PPI
PKGNAMEPREFIX=	p5-

MAINTAINER=	lth@FreeBSD.org
COMMENT=	XS acceleration for the PPI perl parser

RUN_DEPENDS=	p5-PPI>=1.000:${PORTSDIR}/textproc/p5-PPI
BUILD_DEPENDS:=	${RUN_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	PPI::XS.3

.include <bsd.port.mk>
