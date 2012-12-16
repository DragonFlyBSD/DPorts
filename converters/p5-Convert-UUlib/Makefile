# New ports collection makefile for:	p5-Convert-UUlib
# Date created:				November 19th 2000
# Whom:					Blaz Zupan <blaz@amis.net>
#
# $FreeBSD: ports/converters/p5-Convert-UUlib/Makefile,v 1.28 2012/11/17 05:55:03 svnexp Exp $
#

PORTNAME=	Convert-UUlib
PORTVERSION=	1.40
PORTEPOCH=	1
CATEGORIES=	converters perl5
MASTER_SITES=	CPAN
MASTER_SITE_SUBDIR=	CPAN:MLEHMANN
PKGNAMEPREFIX=	p5-
DISTNAME=	${PORTNAME}-${PORTVERSION:S,0,,}

MAINTAINER=	perl@FreeBSD.org
COMMENT=	Perl5 interface to the uulib library (a.k.a. uudeview/uuenview)

PERL_CONFIGURE=	yes

MAN3=		Convert::UUlib.3

.if !defined(NOPORTDOCS)
PORTDOCS=	Changes README

post-install:
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${PORTDOCS:S|^|${WRKSRC}/|} ${DOCSDIR}
	@${ECHO_MSG} "===> Documentation installed in ${DOCSDIR}."
.endif

.include <bsd.port.mk>
