# New ports collection makefile for:	p5-IMAP-Admin
# Date created:		Sun Sep 26 09:25:38 EEST 1999
# Whom:	      		Martti Kuparinen <martti.kuparinen@ericsson.com>
#
# $FreeBSD: ports/mail/p5-IMAP-Admin/Makefile,v 1.25 2012/11/17 05:59:08 svnexp Exp $
#

PORTNAME=	IMAP-Admin
PORTVERSION=	1.6.7
CATEGORIES=	mail perl5
MASTER_SITES=	CPAN
PKGNAMEPREFIX=	p5-

MAINTAINER=	chifeng@gmail.com
COMMENT=	Perl module for basic IMAP server administration

PERL_CONFIGURE=	YES

MAN3=		IMAP::Admin.3
EXAMPLESDIR=	${PREFIX}/share/examples/${UNIQUENAME}

.if !defined(NOPORTEXAMPLES)
PORTEXAMPLES=	create.pl delete.pl
post-install:
	@${MKDIR} ${EXAMPLESDIR}
	@cd ${WRKSRC}/examples && ${INSTALL_DATA} ${PORTEXAMPLES} ${EXAMPLESDIR}
	@${ECHO_MSG} ""
	@${ECHO_MSG} "*******************************************************************************"
	@${ECHO_MSG} "See ${EXAMPLESDIR} for some examples..."
	@${ECHO_MSG} "*******************************************************************************"
	@${ECHO_MSG} ""
.endif

.include <bsd.port.mk>
