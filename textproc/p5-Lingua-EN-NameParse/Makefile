# New ports collection makefile for:	Lingua::EN::NameParse
# Date created:				30 Dec 2001
# Whom:					Seamus Venasse <svenasse@polaris.ca>
#
# $FreeBSD: ports/textproc/p5-Lingua-EN-NameParse/Makefile,v 1.17 2012/11/17 06:02:05 svnexp Exp $
#

PORTNAME=	Lingua-EN-NameParse
PORTVERSION=	1.30
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
