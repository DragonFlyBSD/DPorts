# Created by: Grzegorz Blach <gblach@FreeBSD.org>
# $FreeBSD: www/p5-Dancer-Plugin-SiteMap/Makefile 339786 2014-01-15 15:27:45Z gblach $

PORTNAME=	Dancer-Plugin-SiteMap
PORTVERSION=	0.12
CATEGORIES=	www perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:JAMESR
PKGNAMEPREFIX=	p5-

MAINTAINER=	gblach@FreeBSD.org
COMMENT=	Automated site map for the Dancer web framework

LICENSE=	ART10 GPLv1
LICENSE_COMB=	dual

BUILD_DEPENDS=	p5-Dancer>=1.175:${PORTSDIR}/www/p5-Dancer \
		p5-XML-Simple>0:${PORTSDIR}/textproc/p5-XML-Simple
RUN_DEPENDS=	p5-Dancer>=1.175:${PORTSDIR}/www/p5-Dancer \
		p5-XML-Simple>0:${PORTSDIR}/textproc/p5-XML-Simple

USES=		perl5
USE_PERL5=	configure

.include <bsd.port.mk>
