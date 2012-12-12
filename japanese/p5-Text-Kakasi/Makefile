# New ports collection makefile for:	p5-kakasi
# Date created:		25 February 2000
# Whom:			Akinori MUSHA aka knu <knu@idaemons.org>
#
# $FreeBSD: ports/japanese/p5-Text-Kakasi/Makefile,v 1.16 2012/11/17 05:58:38 svnexp Exp $
#

PORTNAME=	Text-Kakasi
PORTVERSION=	2.04
CATEGORIES=	japanese textproc perl5
MASTER_SITES=	CPAN

MAINTAINER=	ports@FreeBSD.org
COMMENT=	Kakasi library module for Perl5

LIB_DEPENDS=	kakasi.3:${PORTSDIR}/japanese/kakasi

PERL_CONFIGURE=	yes
MAN3=		Text::Kakasi.3 Text::Kakasi::JP.3

.include <bsd.port.pre.mk>

PKGNAMEPREFIX:=	${PKGNAMEPREFIX}p5-

post-patch:
	@${REINPLACE_CMD} -e 's|/usr/local|${LOCALBASE}|g' ${WRKSRC}/Makefile.PL

.include <bsd.port.post.mk>
