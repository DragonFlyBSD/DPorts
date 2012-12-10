# New ports collection makefile for:	p5-NNML
# Date created:		2006-07-14
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/news/p5-NNML/Makefile,v 1.4 2012/11/17 06:00:43 svnexp Exp $
#

PORTNAME=	NNML
PORTVERSION=	1.14
CATEGORIES=	news perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	gslin@gslin.org
COMMENT=	A minimal NNTP server

PERL_CONFIGURE=	yes

RESTRICTED=	License unknown

MAN1=		nnmirror.1 nnsync.1 overview.1
MAN3=		NNML::Server.3

.if defined(BATCH)
CONFIGURE_ARGS+=	< /dev/null
.else
IS_INTERACTIVE=	yes
.endif

.include <bsd.port.mk>
