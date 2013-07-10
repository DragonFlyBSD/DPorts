# Created by: Seamus Venasse <svenasse@polaris.ca>
# $FreeBSD: textproc/p5-Lingua-EN-NameParse/Makefile 321929 2013-06-28 02:34:26Z clsung $

PORTNAME=	Lingua-EN-NameParse
PORTVERSION=	1.31
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl routines for manipulating a person's name

BUILD_DEPENDS=	p5-Parse-RecDescent>=0:${PORTSDIR}/devel/p5-Parse-RecDescent
RUN_DEPENDS:=	${BUILD_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		Lingua::EN::NameParse.3 \
		Lingua::EN::NameParse::Grammar.3

.include <bsd.port.mk>
