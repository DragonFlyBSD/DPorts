# New ports collection makefile for:	XML::Handler::Trees
# Date created:		22 Nov 2001
# Whom:			Sergey Skvortsov <skv@protey.ru>
#
# $FreeBSD: ports/textproc/p5-XML-Handler-Trees/Makefile,v 1.6 2012/11/17 06:02:12 svnexp Exp $
#

PORTNAME=	XML-Handler-Trees
PORTVERSION=	0.02
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	PerlSAX handlers for building tree structures

PERL_CONFIGURE=	yes

MAN3=		XML::Handler::Trees.3

post-extract:
	@${CHMOD} +w ${WRKSRC}/Trees.pm && ${PERL} -pi -e 's|\r||' ${WRKSRC}/Trees.pm

.include <bsd.port.mk>
