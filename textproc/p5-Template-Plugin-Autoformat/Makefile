# Created by: Vivek Khera <vivek@khera.org>
# $FreeBSD: textproc/p5-Template-Plugin-Autoformat/Makefile 340711 2014-01-22 14:35:55Z mat $

PORTNAME=	Template-Plugin-Autoformat
PORTVERSION=	2.71
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	vivek@khera.org
COMMENT=	Template Toolkit interface to Text::Autoformat module

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

RUN_DEPENDS=	p5-Template-Toolkit>=2.22:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-Text-Autoformat>0:${PORTSDIR}/textproc/p5-Text-Autoformat
BUILD_DEPENDS=	p5-Template-Toolkit>=2.22:${PORTSDIR}/www/p5-Template-Toolkit \
		p5-Text-Autoformat>0:${PORTSDIR}/textproc/p5-Text-Autoformat

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
