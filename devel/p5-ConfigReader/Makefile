# Created by: James FitzGibbon <jfitz@FreeBSD.org>
# $FreeBSD: devel/p5-ConfigReader/Makefile 331856 2013-10-28 13:46:25Z vanilla $

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
	${MKDIR} ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/DirectiveStyle.pm ${WRKSRC}/Spec.pm \
		${WRKSRC}/Values.pm ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/ConfigReader/
	${INSTALL_DATA} ${WRKSRC}/ConfigReader.pod ${STAGEDIR}${PREFIX}/${SITE_PERL_REL}/

.include <bsd.port.mk>
