# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-Lingua-EN-NameParse/Makefile 327773 2013-09-20 23:17:30Z bapt $

PORTNAME=	Lingua-EN-NameParse
PORTVERSION=	1.31
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl routines for manipulating a person's name

BUILD_DEPENDS=	p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}

USES=		perl5
USE_PERL5=	configure

MAN3=		Lingua::EN::NameParse.3 \
		Lingua::EN::NameParse::Grammar.3

NO_STAGE=	yes
.include <bsd.port.mk>
