# New ports collection makefile for:	p5-XML-TreePP
# Date created:		2006-08-14
# Whom:			Gea-Suan Lin <gslin@gslin.org>
#
# $FreeBSD: ports/textproc/p5-XML-TreePP/Makefile,v 1.18 2012/11/17 06:02:14 svnexp Exp $
#

PORTNAME=	XML-TreePP
PORTVERSION=	0.41
CATEGORIES=	textproc perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Pure Perl implementation for parsing/writing xml files

PERL_CONFIGURE=	yes

MAN3=		XML::TreePP.3

post-install:
	${MKDIR} ${EXAMPLESDIR}
	${INSTALL_SCRIPT} ${WRKSRC}/example/envxml.cgi ${EXAMPLESDIR}

.include <bsd.port.mk>
