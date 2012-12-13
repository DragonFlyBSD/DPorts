# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: ports/devel/p5-ConfigReader/Makefile,v 1.20 2012/11/17 05:56:09 svnexp Exp $

PORTNAME=	ConfigReader
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module to read directives from a configuration file

USE_PERL5=	YES

NO_BUILD=	YES

do-install:
	${MKDIR} ${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/DirectiveStyle.pm ${WRKSRC}/Spec.pm \
		${WRKSRC}/Values.pm ${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/ConfigReader.pod ${PREFIX}/${SITE_PERL_REL}/

.include <bsd.port.mk>
