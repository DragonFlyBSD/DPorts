# New ports collection makefile for:	p5-KyotoCabinet
# Date created:				2011-09-19
# Whom:					Geraud CONTINSOUZAS <geraud@gcu.info>
#
# $FreeBSD: ports/databases/p5-KyotoCabinet/Makefile,v 1.7 2012/11/17 05:55:16 svnexp Exp $
#

PORTNAME=	KyotoCabinet
PORTVERSION=	1.18
PORTREVISION=	5
CATEGORIES=	databases perl5
MASTER_SITES=	http://fallabs.com/kyotocabinet/perlpkg/
PKGNAMEPREFIX=	p5-
DISTNAME=	kyotocabinet-perl-${PORTVERSION}

MAINTAINER=	geraud@gcu.info
COMMENT=	Perl extension for KyotoCabinet

LICENSE=	GPLv3

LIB_DEPENDS=	kyotocabinet:${PORTSDIR}/databases/kyotocabinet

PERL_CONFIGURE=	yes

MAN3=	KyotoCabinet.3

.include <bsd.port.mk>
