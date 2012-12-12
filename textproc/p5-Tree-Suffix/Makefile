# New ports collection makefile for:	Tree-Suffix
# Date created:				Apr 17 2006
# Whom:					clsung
#
# $FreeBSD: ports/textproc/p5-Tree-Suffix/Makefile,v 1.9 2012/11/17 06:02:11 svnexp Exp $
#

PORTNAME=	Tree-Suffix
PORTVERSION=	0.21
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl interface to the libstree library

LIB_DEPENDS=	stree.0:${PORTSDIR}/textproc/libstree

PERL_CONFIGURE=	yes
CFLAGS+=	-I${LOCALBASE}/include

MAN3=		Tree::Suffix.3

.include <bsd.port.mk>
