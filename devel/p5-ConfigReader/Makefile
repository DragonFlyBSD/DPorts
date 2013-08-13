# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: devel/p5-ConfigReader/Makefile 324181 2013-08-03 08:45:51Z az $

PORTNAME=	ConfigReader
PORTVERSION=	0.5
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Perl5 module to read directives from a configuration file

USES=		perl5
NO_BUILD=	YES

do-install:
	${MKDIR} ${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/DirectiveStyle.pm ${WRKSRC}/Spec.pm \
		${WRKSRC}/Values.pm ${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/ConfigReader.pod ${PREFIX}/${SITE_PERL_REL}/

.include <bsd.port.mk>
