# New ports collection makefile for:   gotmail
# Date created:        9 August 2001
# Whom:                Christopher Elkins <chrise@scardini.com>
#
# $FreeBSD: ports/mail/gotmail/Makefile,v 1.35 2012/11/17 05:59:03 svnexp Exp $
#

PORTNAME=	gotmail
PORTVERSION=	0.9.0
PORTREVISION=	2
CATEGORIES=	mail perl5
MASTER_SITES=	SF

MAINTAINER=	araujo@FreeBSD.org
COMMENT=	A script to fetch mail from a Hotmail or MSN mailbox

RUN_DEPENDS=	curl:${PORTSDIR}/ftp/curl \
		p5-URI>=0:${PORTSDIR}/net/p5-URI \
		p5-Net>=0:${PORTSDIR}/net/p5-Net

MAN1=		${PORTNAME}.1
USE_PERL5=	yes

do-install:
	${INSTALL_MAN} ${WRKSRC}/${PORTNAME}.man \
		${MANPREFIX}/man/man1/${PORTNAME}.1
	${INSTALL_SCRIPT} ${WRKSRC}/${PORTNAME} ${PREFIX}/bin

post-install:
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
.for i in ChangeLog README sample.gotmailrc
	${INSTALL_DATA} ${WRKSRC}/${i} ${DOCSDIR}
.endfor # i in ChangeLog README sample.gotmailrc
.endif # !defined(NOPORTDOCS)

.include <bsd.port.mk>
