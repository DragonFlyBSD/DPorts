# Created by: Peter Pentchev <roam@FreeBSD.org>
# $FreeBSD: ports/devel/p5-File-Append-TempFile/Makefile,v 1.13 2012/11/17 05:56:15 svnexp Exp $

PORTNAME=	File-Append-TempFile
PORTVERSION=	0.05
PORTREVISION=	1
CATEGORIES=	devel perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	eadler@FreeBSD.org
COMMENT=	Append data to files using a temporary copy

TEST_DEPENDS=	p5-Test-Pod-Coverage>=0:${PORTSDIR}/devel/p5-Test-Pod-Coverage

PERL_CONFIGURE=	yes

MAN3=		File::Append::TempFile.3

PORTDOCS=	Changes README

test:		build
		@cd ${WRKSRC} && ${SETENV} ${MAKE_ENV} ${MAKE} ${MAKE_FLAGS} ${MAKEFILE} ${MAKE_ARGS} test

.include <bsd.port.options.mk>

.if ${PORT_OPTIONS:MDOCS}
post-install:
		${MKDIR} ${DOCSDIR}
		${INSTALL_DATA} ${PORTDOCS:S,^,${WRKSRC}/,} ${DOCSDIR}
.endif

.include <bsd.port.mk>
