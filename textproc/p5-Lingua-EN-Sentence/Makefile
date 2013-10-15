# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-Lingua-EN-Sentence/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=		Lingua-EN-Sentence
PORTVERSION=		0.25
CATEGORIES=		textproc perl5
MASTER_SITES=		CPAN
MASTER_SITE_SUBDIR=	CPAN:SHLOMOY
PKGNAMEPREFIX=		p5-

MAINTAINER=		perl@FreeBSD.org
COMMENT=		Module for splitting text into sentences

USES=		perl5
USE_PERL5=	configure

MAN3=			Lingua::EN::Sentence.3

NO_STAGE=	yes
post-extract:
	@${RM} -f ${WRKSRC}/lib/Lingua/EN/Sentence.pm~

.include <bsd.port.mk>
