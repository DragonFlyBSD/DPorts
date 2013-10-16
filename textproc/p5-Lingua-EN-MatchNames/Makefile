# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-Lingua-EN-MatchNames/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Lingua-EN-MatchNames
PORTVERSION=	1.12
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Smart matching for human names

BUILD_DEPENDS=	p5-Lingua-EN-NameParse>=0:${PORTSDIR}/textproc/p5-Lingua-EN-NameParse \
		p5-Lingua-EN-Nickname>=0:${PORTSDIR}/textproc/p5-Lingua-EN-Nickname \
		p5-String-Approx>=0:${PORTSDIR}/devel/p5-String-Approx \
		p5-Text-Metaphone>=0:${PORTSDIR}/textproc/p5-Text-Metaphone
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=	Lingua::EN::MatchNames.3

NO_STAGE=	yes
.include <bsd.port.mk>
