# New ports collection makefile for:	p5-CSS-Tiny
# Date created:		2003-10-31
# Whom:			Hansjoerg Pehofer <hansjoerg.pehofer@uibk.ac.at>
#
# $FreeBSD: ports/textproc/p5-CSS-Tiny/Makefile,v 1.17 2012/11/17 06:02:04 svnexp Exp $
#

PORTNAME=	CSS-Tiny
PORTVERSION=	1.19
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Read/Write .css files with as little code as possible

RUN_DEPENDS=	p5-Clone>=0:${PORTSDIR}/devel/p5-Clone
BUILD_DEPENDS:=	${RUN_DEPENDS}

PERL_CONFIGURE=	yes

MAN3=		CSS::Tiny.3

.include <bsd.port.mk>
