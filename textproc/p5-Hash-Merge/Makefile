# New ports collection makefile for:   p5-Hash-Merge
# Date created:        22 June 2004
# Whom:                snowchyld
#
# $FreeBSD: ports/textproc/p5-Hash-Merge/Makefile,v 1.11 2012/11/17 06:02:04 svnexp Exp $

PORTNAME=	Hash-Merge
PORTVERSION=	0.12
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Merges hashes

RUN_DEPENDS=	p5-Clone>=0:${PORTSDIR}/devel/p5-Clone
BUILD_DEPENDS:=	${RUN_DEPENDS}

MAN3=		Hash::Merge.3

PERL_CONFIGURE=	yes

.include <bsd.port.mk>
