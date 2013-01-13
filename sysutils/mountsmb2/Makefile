# New ports collection makefile for:	mountsmb2
# Date created:				17 Mar 2006
# Whom:					Rashid N. Achilov <shelton@granch.ru>
#
# $FreeBSD: ports/sysutils/mountsmb2/Makefile,v 1.6 2012/11/17 06:01:39 svnexp Exp $
#

PORTNAME=	mountsmb2
PORTVERSION=	0.90.2
CATEGORIES=	sysutils net
MASTER_SITES=	${MASTER_SITE_LOCAL}
MASTER_SITE_SUBDIR=	lippe

MAINTAINER=	citycat4@ngs.ru
COMMENT=	SMB/CIFS shares mounting scripts to do it at login

RUN_DEPENDS=	nbtscan:${PORTSDIR}/net-mgmt/nbtscan \
		sudo:${PORTSDIR}/security/sudo

USE_BZIP2=	yes
NO_BUILD=	yes

EXAMPLES=	sudoers .login .nsmbrc .mssmbrc nsmb.conf
SCRIPTS=	smb2nsmbrc mountsmb2

SUB_FILES=	pkg-message

do-install:
	@${INSTALL_SCRIPT} ${SCRIPTS:S,^,${WRKSRC}/,} ${PREFIX}/bin
.if !defined(NOPORTEXAMPLES)
	@${MKDIR} ${EXAMPLESDIR}
	@${INSTALL_DATA} ${EXAMPLES:S,^,${WRKSRC}/,} ${EXAMPLESDIR}
.endif
.if !defined(NOPORTDOCS)
	@${MKDIR} ${DOCSDIR}
	@${INSTALL_DATA} ${WRKSRC}/README.FreeBSD ${DOCSDIR}
.endif

.include <bsd.port.mk>
